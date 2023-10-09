<!-- Improved compatibility of back to top link: See: https://github.com/othneildrew/Best-README-Template/pull/73 -->
<a name="readme-top"></a>
<!--
*** Thanks for checking out the Best-README-Template. If you have a suggestion
*** that would make this better, please fork the repo and create a pull request
*** or simply open an issue with the tag "enhancement".
*** Don't forget to give the project a star!
*** Thanks again! Now go create something AMAZING! :D
-->



[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url]



<!-- PROJECT LOGO -->
<br />
<div align="center">
  <a href="https://github.com/BrandenM-OW/sage">
    <img src="images/logo.jpg" alt="Logo" width="200" height="200">
  </a>


  <p align="center">
    Sage is a lightweight GBA development library for mode 5 inspired by <a href="https://www.youtube.com/channel/UCjdHbo8_vh3rxQ-875XGkvw">3DSage</a>.
    <br />
    <a href="https://github.com/BrandenM-OW/sage/wiki"><strong>Explore the wiki »</strong></a>
    <br />
    <br />
    <a href="https://github.com/BrandenM-OW/sage/issues">Report Bug</a>
    ·
    <a href="https://github.com/BrandenM-OW/sage/issues">Request Feature</a>
  </p>
</div>



<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#built-with">Built With</a></li>
      </ul>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#acknowledgments">Acknowledgments</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## About The Project

Sage focuses on the GBA's bitmap display mode 5 providing back buffer page filping and full 32bit color with the trade off being halfed resolution (120x80) streched to fit the GBAs screen. The goal is to provide a small library, set of tooling, and build pipline that exposes concepts about the GBA for beginners or those looking to get set up quickly.

<p align="right">(<a href="#readme-top">back to top</a>)</p>



### Built With

* <a href="https://github.com/devkitPro">DevKitPro</a>
* <a href="https://github.com/3DSage/GBA_Mode_5_Starter">3DSage starter</a>

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- GETTING STARTED -->
## Getting Started

To get started you will need the following installed on your system:

### Prerequisites

* [DevKitPro Setup](https://devkitpro.org/wiki/Getting_Started)
* GBA emulator

### Installation

1. Once DevKitPro is intalled, make sure to add the devkitARM directory in your system path, this is where the gcc compiler for the GBA is.
2. Clone the repo
   ```sh
   git clone hhttps://github.com/BrandenM-OW/sage.git
   ```
3. Run the MakeFile
   ```sh
   cd path/to/repo/<project-name>
   make
   ```
4. The result of the makefile will be a <project-name>.gba file in the root of the project folder which you can run in your emulator.

5. Automation. It's beneficial to automate the above to some degree. A batch file to run make clean && make && mgba-qt project.gba for example or using tasks in VSCode can improve the build / test loop. 

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- USAGE EXAMPLES -->
## Usage

We will be adding usage examples as branches to the repo as we build them.

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- ROADMAP -->
## Roadmap

- [ ] Sprites and images
- [ ] .bmp to c array pipeline in the build
- [ ] UI tooling
- [ ] Physics
- [ ] Better controller input handling

See the [open issues](hhttps://github.com/BrandenM-OW/sage/issues) for a full list of proposed features (and known issues).

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- CONTRIBUTING -->
## Contributing

Contributions are what make the open source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

If you have a suggestion that would make this better, please fork the repo and create a pull request. You can also simply open an issue with the tag "enhancement".
Don't forget to give the project a star! Thanks again!

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- LICENSE -->
## License

Distributed under the MIT License. See `LICENSE.txt` for more information.

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- CONTACT -->
## Contact

Branden Morin - You won't catch me active on social media.

Project Link: [hhttps://github.com/BrandenM-OW/sage](hhttps://github.com/BrandenM-OW/sage)

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- ACKNOWLEDGMENTS -->
## Acknowledgments

* [3DSage](https://www.youtube.com/channel/UCjdHbo8_vh3rxQ-875XGkvw)
* [Devkitpro](https://devkitpro.org/wiki/Main_Page)
* [Tonc](https://www.coranac.com/tonc)
* [Brian Sowers](https://archive.gamedev.net/archive/reference/programming/features/gba2/index.html)

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/BrandenM-OW/sage.svg?style=for-the-badge
[contributors-url]: hhttps://github.com/BrandenM-OW/sage/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/BrandenM-OW/sage.svg?style=for-the-badge
[forks-url]: hhttps://github.com/BrandenM-OW/sage/network/members
[stars-shield]: https://img.shields.io/github/stars/BrandenM-OW/sage.svg?style=for-the-badge
[stars-url]: hhttps://github.com/BrandenM-OW/sage/stargazers
[issues-shield]: https://img.shields.io/github/issues/BrandenM-OW/sage.svg?style=for-the-badge
[issues-url]: hhttps://github.com/BrandenM-OW/sage/issues
[license-shield]: https://img.shields.io/github/license/BrandenM-OW/sage.svg?style=for-the-badge
[license-url]: hhttps://github.com/BrandenM-OW/sage/blob/master/LICENSE.txt
[devkitpro-url]: https://github.com/devkitPro
[3dsage-url]: https://github.com/3DSage