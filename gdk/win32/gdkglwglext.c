/* GdkGLExt - OpenGL Extension to GDK
 * Copyright (C) 2002  Naofumi Yasufuku
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307  USA.
 */

#include "gdkglprivate-win32.h"
#include "gdkglwglext.h"

#define _GDK_GL_GET_PROC(proc_name)                                                             \
GdkGLProc                                                                                       \
_GDK_GL_CONCAT(gdk_gl_get_, proc_name) (void)                                                   \
{                                                                                               \
  static gboolean init = FALSE;                                                                 \
  static GdkGLProc proc_address = NULL;                                                         \
                                                                                                \
  if (!init)                                                                                    \
    {                                                                                           \
      proc_address = gdk_gl_query_get_proc_address (#proc_name);                                \
                                                                                                \
      GDK_GL_NOTE (IMPL, g_message (" * gdk_gl_get_%s () - %s",                                 \
                                    #proc_name,                                                 \
                                    (proc_address == NULL) ? "not supported" : "supported"));   \
                                                                                                \
      init = TRUE;                                                                              \
    }                                                                                           \
                                                                                                \
  return proc_address;                                                                          \
}

_GDK_GL_GET_PROC(wglCreateBufferRegionARB)

_GDK_GL_GET_PROC(wglDeleteBufferRegionARB)

_GDK_GL_GET_PROC(wglSaveBufferRegionARB)

_GDK_GL_GET_PROC(wglRestoreBufferRegionARB)

_GDK_GL_GET_PROC(wglGetExtensionsStringARB)

_GDK_GL_GET_PROC(wglGetPixelFormatAttribivARB)

_GDK_GL_GET_PROC(wglGetPixelFormatAttribfvARB)

_GDK_GL_GET_PROC(wglChoosePixelFormatARB)

_GDK_GL_GET_PROC(wglMakeContextCurrentARB)

_GDK_GL_GET_PROC(wglGetCurrentReadDCARB)

_GDK_GL_GET_PROC(wglCreatePbufferARB)

_GDK_GL_GET_PROC(wglGetPbufferDCARB)

_GDK_GL_GET_PROC(wglReleasePbufferDCARB)

_GDK_GL_GET_PROC(wglDestroyPbufferARB)

_GDK_GL_GET_PROC(wglQueryPbufferARB)

_GDK_GL_GET_PROC(wglBindTexImageARB)

_GDK_GL_GET_PROC(wglReleaseTexImageARB)

_GDK_GL_GET_PROC(wglSetPbufferAttribARB)

_GDK_GL_GET_PROC(wglCreateDisplayColorTableEXT)

_GDK_GL_GET_PROC(wglLoadDisplayColorTableEXT)

_GDK_GL_GET_PROC(wglBindDisplayColorTableEXT)

_GDK_GL_GET_PROC(wglDestroyDisplayColorTableEXT)

_GDK_GL_GET_PROC(wglGetExtensionsStringEXT)

_GDK_GL_GET_PROC(wglMakeContextCurrentEXT)

_GDK_GL_GET_PROC(wglGetCurrentReadDCEXT)

_GDK_GL_GET_PROC(wglCreatePbufferEXT)

_GDK_GL_GET_PROC(wglGetPbufferDCEXT)

_GDK_GL_GET_PROC(wglReleasePbufferDCEXT)

_GDK_GL_GET_PROC(wglDestroyPbufferEXT)

_GDK_GL_GET_PROC(wglQueryPbufferEXT)

_GDK_GL_GET_PROC(wglGetPixelFormatAttribivEXT)

_GDK_GL_GET_PROC(wglGetPixelFormatAttribfvEXT)

_GDK_GL_GET_PROC(wglChoosePixelFormatEXT)

_GDK_GL_GET_PROC(wglSwapIntervalEXT)

_GDK_GL_GET_PROC(wglGetSwapIntervalEXT)

_GDK_GL_GET_PROC(wglAllocateMemoryNV)

_GDK_GL_GET_PROC(wglFreeMemoryNV)

_GDK_GL_GET_PROC(wglGetSyncValuesOML)

_GDK_GL_GET_PROC(wglGetMscRateOML)

_GDK_GL_GET_PROC(wglSwapBuffersMscOML)

_GDK_GL_GET_PROC(wglSwapLayerBuffersMscOML)

_GDK_GL_GET_PROC(wglWaitForMscOML)

_GDK_GL_GET_PROC(wglWaitForSbcOML)

_GDK_GL_GET_PROC(wglGetDigitalVideoParametersI3D)

_GDK_GL_GET_PROC(wglSetDigitalVideoParametersI3D)

_GDK_GL_GET_PROC(wglGetGammaTableParametersI3D)

_GDK_GL_GET_PROC(wglSetGammaTableParametersI3D)

_GDK_GL_GET_PROC(wglGetGammaTableI3D)

_GDK_GL_GET_PROC(wglSetGammaTableI3D)

_GDK_GL_GET_PROC(wglEnableGenlockI3D)

_GDK_GL_GET_PROC(wglDisableGenlockI3D)

_GDK_GL_GET_PROC(wglIsEnabledGenlockI3D)

_GDK_GL_GET_PROC(wglGenlockSourceI3D)

_GDK_GL_GET_PROC(wglGetGenlockSourceI3D)

_GDK_GL_GET_PROC(wglGenlockSourceEdgeI3D)

_GDK_GL_GET_PROC(wglGetGenlockSourceEdgeI3D)

_GDK_GL_GET_PROC(wglGenlockSampleRateI3D)

_GDK_GL_GET_PROC(wglGetGenlockSampleRateI3D)

_GDK_GL_GET_PROC(wglGenlockSourceDelayI3D)

_GDK_GL_GET_PROC(wglGetGenlockSourceDelayI3D)

_GDK_GL_GET_PROC(wglQueryGenlockMaxSourceDelayI3D)

_GDK_GL_GET_PROC(wglCreateImageBufferI3D)

_GDK_GL_GET_PROC(wglDestroyImageBufferI3D)

_GDK_GL_GET_PROC(wglAssociateImageBufferEventsI3D)

_GDK_GL_GET_PROC(wglReleaseImageBufferEventsI3D)

_GDK_GL_GET_PROC(wglEnableFrameLockI3D)

_GDK_GL_GET_PROC(wglDisableFrameLockI3D)

_GDK_GL_GET_PROC(wglIsEnabledFrameLockI3D)

_GDK_GL_GET_PROC(wglQueryFrameLockMasterI3D)

_GDK_GL_GET_PROC(wglGetFrameUsageI3D)

_GDK_GL_GET_PROC(wglBeginFrameTrackingI3D)

_GDK_GL_GET_PROC(wglEndFrameTrackingI3D)

_GDK_GL_GET_PROC(wglQueryFrameTrackingI3D)
