const HtmlWebpackPlugin = require("html-webpack-plugin");
const { CleanWebpackPlugin } = require('clean-webpack-plugin')
const path = require("path");

module.exports = {
  entry: "./src/views/layouts/index.js",
  output: {
    filename: "[name].bundle.js",
    path: path.join(__dirname, "build"),
    publicPath: "./",
  },
  mode: 'production' ,
  module: {
    rules: [
      {
        test: /\.(hbs|handlebars)$/,
        exclude: /node_modules/,
        loader: "handlebars-loader",
        query: {
            partialDirs: [
                path.join(__dirname, 'src', 'views', 'partials')
            ]
        }
      },
      {
        test: /\.css$/i,
        use: ["style-loader", "css-loader"],
      },
      {
        test: /\.(png|jpg|jpe?g|gif|mp4)$/i,
        loader: "file-loader",
        options: {
          name: "[path].[name].[ext]",
        },
      },
    ],
  },
  plugins: [
    new CleanWebpackPlugin(),
    new HtmlWebpackPlugin({
      template: "./src/views/layouts/main.hbs",
      filename: "./index.html",
    }),
  ],
  devServer: {
    historyApiFallback: true,
  },
  performance: {
    hints: false,
  },
};
