/*
 * SMPTE 436m decoder
 * Copyright (c) 2011 Dave Rice (dericed@gmail.com)
 *
 * This file is part of FFmpeg.
 *
 * FFmpeg is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * FFmpeg is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with FFmpeg; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

/**
 * @file
 * SMPTE 436m Decoder
 */

AVCodec s436m_decoder =
{
    .name           = "s436m",
    .type           = AVMEDIA_TYPE_VIDEO,
    .id             = CODEC_ID_S436M,
    .priv_data_size = sizeof(S436MContext),
    .init           = s436m_decode_init,
    .close          = s436m_decode_close,
    .decode         = s436m_decode_frame,
    .long_name      = NULL_IF_CONFIG_SMALL("SMPTE 436M MXF Mappings for VBI Lines and Ancillary Data Packets"),
};
