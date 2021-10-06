// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "common",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "common",
            targets: ["common"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "common",
            url: "https://github.com/elderanakain/daily-dish-package/common-1.0.9.zip",
            checksum: "9dadfdb5c26c80e4ee57b6d6df3ecb559776615bc61b0586dfe17123dd8fdfe6"
        ),
    ]
)
