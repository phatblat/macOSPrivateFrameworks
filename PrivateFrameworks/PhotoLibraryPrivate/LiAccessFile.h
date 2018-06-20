//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiObject.h>

@class NSURL;

@interface LiAccessFile : LiObject
{
    BOOL _wasSecuritySandboxExtensionApplied;
    unsigned char _mode;
    NSURL *_url;
}

@property(nonatomic) unsigned char mode; // @synthesize mode=_mode;
@property(nonatomic) BOOL wasSecuritySandboxExtensionApplied; // @synthesize wasSecuritySandboxExtensionApplied=_wasSecuritySandboxExtensionApplied;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)description;
- (id)initWithURL:(id)arg1 accessMode:(unsigned char)arg2;
- (id)init;
- (void)dealloc;

@end

