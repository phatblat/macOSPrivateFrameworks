//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface IMPreviewGeneratorManager : NSObject
{
    NSDictionary *_UTITypes;
    NSDictionary *_dynamicTypes;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSDictionary *dynamicTypes; // @synthesize dynamicTypes=_dynamicTypes;
@property(copy, nonatomic) NSDictionary *UTITypes; // @synthesize UTITypes=_UTITypes;
- (void)dealloc;
- (Class)previewGeneratorClassForUTIType:(id)arg1;
- (BOOL)_utiTypeIsHEICish:(id)arg1;
- (Class)_previewGeneratorClassForSourceURL:(id)arg1;
- (BOOL)movePreviewToDiskCache:(id)arg1 previewURL:(id)arg2 error:(id *)arg3;
- (BOOL)persistPreviewToDiskCache:(struct CGImage *)arg1 previewURL:(id)arg2 error:(id *)arg3;
- (struct CGImage *)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 error:(id *)arg3;
- (BOOL)sizePreviewFromSourceURL:(id)arg1 size:(out struct CGSize *)arg2 previewConstraints:(struct IMPreviewConstraints)arg3 error:(id *)arg4;
- (BOOL)generateAndPersistMapPreviewFromSourceURL:(id)arg1 previewURL:(id)arg2 size:(out struct CGSize *)arg3 previewConstraints:(struct IMPreviewConstraints)arg4 error:(id *)arg5;
- (BOOL)generateAndPersistPreviewFromSourceURL:(id)arg1 previewURL:(id)arg2 size:(out struct CGSize *)arg3 previewConstraints:(struct IMPreviewConstraints)arg4 error:(id *)arg5;
- (id)init;

@end

