# Modified Sparkfun Serial LCD code to work with TKLCD

## Info
The TK (Tinkerkit) LCD is based on the Leonardo board, I was having issues getting the serial firmware from the TKLCD library to work.
I found that Sparkfun makes a serial LCD based on the UNO, so I modified that code to work on the TKLCD.  It does not need the TKLCD library.
This is serial firmware from Sparkfun, modified to change the PINs the TKLCD uses, and changed Serial to Serial1 for the Leonardo board.

## Usage

Upload this sketch to the TKLCD board, connect the TX and RX lines to your microcontroller, 9600 baud. See the pictures on how I connected it.

## Contributing

1. Fork it!
2. Create your feature branch: `git checkout -b my-new-feature`
3. Commit your changes: `git commit -am 'Add some feature'`
4. Push to the branch: `git push origin my-new-feature`
5. Submit a pull request

## Credits

Serial Enable LCD Kit by Jim Lindblom (Sparkfun)
https://github.com/sparkfun/Serial-LCD-Kit

Modified Apr 23, 2017 LeRoy Miller

## License

This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses>
