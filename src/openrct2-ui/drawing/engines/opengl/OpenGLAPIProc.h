/*****************************************************************************
 * Copyright (c) 2014-2018 OpenRCT2 developers
 *
 * For a complete list of all authors, please refer to contributors.md
 * Interested in contributing? Visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is licensed under the GNU General Public License version 3.
 *****************************************************************************/

#ifndef OPENGL_PROC
#error "Do not include OpenGLAPIProc.h directly. Include OpenGLAPI.h instead."
#endif

// 1.1 function pointers
OPENGL_PROC(PFNGLACTIVETEXTUREPROC,             glActiveTexture)
OPENGL_PROC(PFNGLBEGINPROC,                     glBegin)
OPENGL_PROC(PFNGLBINDTEXTUREPROC,               glBindTexture)
OPENGL_PROC(PFNGLBLENDFUNCPROC,                 glBlendFunc)
OPENGL_PROC(PFNGLCLEARPROC,                     glClear)
OPENGL_PROC(PFNGLCLEARCOLORPROC,                glClearColor)
OPENGL_PROC(PFNGLCULLFACEPROC,                  glCullFace)
OPENGL_PROC(PFNGLDELETETEXTURESPROC,            glDeleteTextures)
OPENGL_PROC(PFNGLDEPTHFUNCPROC,                 glDepthFunc)
OPENGL_PROC(PFNGLDISABLEPROC,                   glDisable)
OPENGL_PROC(PFNGLDRAWARRAYSPROC,                glDrawArrays)
OPENGL_PROC(PFNGLENABLEPROC,                    glEnable)
OPENGL_PROC(PFNGLENDPROC,                       glEnd)
OPENGL_PROC(PFNGLGENTEXTURESPROC,               glGenTextures)
OPENGL_PROC(PFNGLGETERRORPROC,                  glGetError)
OPENGL_PROC(PFNGLPIXELSTOREIPROC,               glPixelStorei)
OPENGL_PROC(PFNGLREADPIXELSPROC,                glReadPixels)
OPENGL_PROC(PFNGLTEXIMAGE2DPROC,                glTexImage2D)
OPENGL_PROC(PFNGLTEXPARAMETERIPROC,             glTexParameteri)
OPENGL_PROC(PFNGLVIEWPORTPROC,                  glViewport)
OPENGL_PROC(PFNGLTEXSUBIMAGE3DPROC,             glTexSubImage3D)
OPENGL_PROC(PFNGLTEXIMAGE3DPROC,                glTexImage3D)
OPENGL_PROC(PFNGLGETINTERGERVPROC,              glGetIntegerv)
OPENGL_PROC(PFNGLGETTEXIMAGEPROC,               glGetTexImage)

// 2.0+ function pointers
OPENGL_PROC(PFNGLATTACHSHADERPROC,              glAttachShader)
OPENGL_PROC(PFNGLBINDBUFFERPROC,                glBindBuffer)
OPENGL_PROC(PFNGLBINDFRAGDATALOCATIONPROC,      glBindFragDataLocation)
OPENGL_PROC(PFNGLBINDFRAMEBUFFERPROC,           glBindFramebuffer)
OPENGL_PROC(PFNGLBINDVERTEXARRAYPROC,           glBindVertexArray)
OPENGL_PROC(PFNGLBLITFRAMEBUFFERPROC,           glBlitFramebuffer)
OPENGL_PROC(PFNGLBUFFERDATAPROC,                glBufferData)
OPENGL_PROC(PFNGLCLEARBUFFERFVPROC,             glClearBufferfv)
OPENGL_PROC(PFNGLCLEARBUFFERUIVPROC,            glClearBufferuiv)
OPENGL_PROC(PFNGLCOMPILESHADERPROC,             glCompileShader)
OPENGL_PROC(PFNGLCREATEPROGRAMPROC,             glCreateProgram)
OPENGL_PROC(PFNGLCREATESHADERPROC,              glCreateShader)
OPENGL_PROC(PFNGLDELETEBUFFERSPROC,             glDeleteBuffers)
OPENGL_PROC(PFNGLDELETEFRAMEBUFFERSPROC,        glDeleteFramebuffers)
OPENGL_PROC(PFNGLDELETEPROGRAMPROC,             glDeleteProgram)
OPENGL_PROC(PFNGLDELETESHADERPROC,              glDeleteShader)
OPENGL_PROC(PFNGLDELETEVERTEXARRAYSPROC,        glDeleteVertexArrays)
OPENGL_PROC(PFNGLDETACHSHADERPROC,              glDetachShader)
OPENGL_PROC(PFNGLENABLEVERTEXATTRIBARRAYPROC,   glEnableVertexAttribArray)
OPENGL_PROC(PFNGLFRAMEBUFFERTEXTURE2DPROC,      glFramebufferTexture2D)
OPENGL_PROC(PFNGLGETATTRIBLOCATIONPROC,         glGetAttribLocation)
OPENGL_PROC(PFNGLGENBUFFERSPROC,                glGenBuffers)
OPENGL_PROC(PFNGLGENFRAMEBUFFERSPROC,           glGenFramebuffers)
OPENGL_PROC(PFNGLGETPROGRAMINFOLOGPROC,         glGetProgramInfoLog)
OPENGL_PROC(PFNGLGETPROGRAMIVPROC,              glGetProgramiv)
OPENGL_PROC(PFNGLGETSHADERINFOLOGPROC,          glGetShaderInfoLog)
OPENGL_PROC(PFNGLGETSHADERIVPROC,               glGetShaderiv)
OPENGL_PROC(PFNGLGETUNIFORMLOCATIONPROC,        glGetUniformLocation)
OPENGL_PROC(PFNGLGENVERTEXARRAYSPROC,           glGenVertexArrays)
OPENGL_PROC(PFNGLLINKPROGRAMPROC,               glLinkProgram)
OPENGL_PROC(PFNGLSHADERSOURCEPROC,              glShaderSource)
OPENGL_PROC(PFNGLUNIFORM1IPROC,                 glUniform1i)
OPENGL_PROC(PFNGLUNIFORM1IVPROC,                glUniform1iv)
OPENGL_PROC(PFNGLUNIFORM1UIPROC,                glUniform1ui);
OPENGL_PROC(PFNGLUNIFORM1UIVPROC,               glUniform1uiv);
OPENGL_PROC(PFNGLUNIFORM2IPROC,                 glUniform2i)
OPENGL_PROC(PFNGLUNIFORM2FPROC,                 glUniform2f)
OPENGL_PROC(PFNGLUNIFORM4FPROC,                 glUniform4f)
OPENGL_PROC(PFNGLUNIFORM4IPROC,                 glUniform4i)
OPENGL_PROC(PFNGLUNIFORM4FVPROC,                glUniform4fv)
OPENGL_PROC(PFNGLUSEPROGRAMPROC,                glUseProgram)
OPENGL_PROC(PFNGLVERTEXATTRIBIPOINTERPROC,      glVertexAttribIPointer)
OPENGL_PROC(PFNGLVERTEXATTRIBPOINTERPROC,       glVertexAttribPointer)
OPENGL_PROC(PFNGLDRAWARRAYSINSTANCEDPROC,       glDrawArraysInstanced)
OPENGL_PROC(PFNGLVERTEXATTRIBDIVISORPROC,       glVertexAttribDivisor)
OPENGL_PROC(PFNGLBLENDFUNCSEPARATEPROC,         glBlendFuncSeparate)