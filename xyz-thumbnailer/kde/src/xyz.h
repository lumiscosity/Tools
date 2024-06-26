/*
 * This file is part of kde-xyz-thumbnailer. Copyright (c) 2020 kde-xyz-thumbnailer authors.
 * https://github.com/EasyRPG/Tools - https://easyrpg.org
 *
 * kde-xyz-thumbnailer is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef XYZ_H
#define XYZ_H

#include <QImage>

// Shared code for creating a XYZ QImage
namespace XyzImage {
	bool toImage(char* xyz_buf, size_t size, QImage &img);
}

#endif // XYZ_H
