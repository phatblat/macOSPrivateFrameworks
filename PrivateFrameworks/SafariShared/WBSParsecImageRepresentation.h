//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SafariShared/WBSParsecModel.h>

@class NSImage, NSNumber, NSObject<OS_dispatch_group>, NSString;

@interface WBSParsecImageRepresentation : WBSParsecModel
{
    NSString *_dataString;
    NSString *_identifier;
    NSString *_imageURLString;
    NSImage *_image;
    BOOL _template;
    NSObject<OS_dispatch_group> *_downloadGroup;
    NSNumber *_baselineOffset;
    NSNumber *_roundCornerRadius;
}

+ (id)_bagImageDataCache;
+ (id)schema;
@property(readonly, nonatomic) NSNumber *roundCornerRadius; // @synthesize roundCornerRadius=_roundCornerRadius;
@property(readonly, nonatomic) NSNumber *baselineOffset; // @synthesize baselineOffset=_baselineOffset;
- (void).cxx_destruct;
- (BOOL)test_isTemplate;
- (id)test_imageURLString;
- (id)test_identifier;
- (id)test_data;
- (id)_imageWithData:(id)arg1;
- (id)_templateImageWithImage:(id)arg1;
- (void)_fetchImageDataUsingBlock:(CDUnknownBlockType)arg1;
- (void)_fetchImageData;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)imageWithScaleFactor:(double)arg1;
- (id)imageWithSession:(id)arg1;
- (id)initWithJSONObject:(id)arg1;

@end

