//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface OITSUTemporaryDirectory : NSObject
{
    NSString *_path;
    BOOL _leak;
}

- (void)_createDirectoryWithSignature:(id)arg1 subdirectory:(id)arg2;
- (void)leakTemporaryDirectory;
- (id)URL;
- (id)path;
- (void)dealloc;
- (id)initWithSignature:(id)arg1 subdirectory:(id)arg2;
- (id)initWithSignature:(id)arg1;
- (id)init;

@end

