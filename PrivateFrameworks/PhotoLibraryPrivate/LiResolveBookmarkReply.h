//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiReply.h>

@class LiGrantAccessFile;

@interface LiResolveBookmarkReply : LiReply
{
    LiGrantAccessFile *_grantFile;
}

+ (unsigned char)encodingObjectType;
@property(retain, nonatomic) LiGrantAccessFile *grantFile; // @synthesize grantFile=_grantFile;
- (void).cxx_destruct;
- (void)encodeWithTransportEncoder:(id)arg1 forLibrary:(id)arg2;
- (id)initWithTransportDecoder:(id)arg1 forLibrary:(id)arg2;
- (id)accessFile;
- (id)initWithAccessURL:(id)arg1 accessMode:(unsigned char)arg2 forRequest:(id)arg3;

@end

