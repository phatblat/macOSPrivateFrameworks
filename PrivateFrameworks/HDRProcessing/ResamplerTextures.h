//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ResamplerTextures : NSObject
{
    id <MTLTexture> _inputTexture;
    id <MTLTexture> _inputTexureUV;
    id <MTLTexture> _tempTextureY;
    id <MTLTexture> _tempTextureUV;
    id <MTLTexture> _outputTextureY;
    id <MTLTexture> _outputTextureUV;
}

@property(retain) id <MTLTexture> outputTextureUV; // @synthesize outputTextureUV=_outputTextureUV;
@property(retain) id <MTLTexture> outputTextureY; // @synthesize outputTextureY=_outputTextureY;
@property(retain) id <MTLTexture> tempTextureUV; // @synthesize tempTextureUV=_tempTextureUV;
@property(retain) id <MTLTexture> tempTextureY; // @synthesize tempTextureY=_tempTextureY;
@property(retain) id <MTLTexture> inputTexureUV; // @synthesize inputTexureUV=_inputTexureUV;
@property(retain) id <MTLTexture> inputTexture; // @synthesize inputTexture=_inputTexture;
- (void).cxx_destruct;

@end

