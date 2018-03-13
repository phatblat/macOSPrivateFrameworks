//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "SFImage.h"

@class NSData, NSDictionary, NSString;

@interface SFImage : NSObject <SFImage, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int isTemplate:1;
        unsigned int shouldCropToCircle:1;
        unsigned int cornerRadius:1;
        unsigned int scale:1;
        unsigned int size:1;
        unsigned int source:1;
    } _has;
    BOOL _isTemplate;
    BOOL _shouldCropToCircle;
    int _source;
    NSData *_imageData;
    double _cornerRadius;
    double _scale;
    NSString *_contentType;
    NSString *_keyColor;
    NSString *_identifier;
    struct CGSize _size;
}

+ (BOOL)supportsSecureCoding;
+ (id)imageWithData:(id)arg1;
@property(nonatomic) int source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *keyColor; // @synthesize keyColor=_keyColor;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) BOOL shouldCropToCircle; // @synthesize shouldCropToCircle=_shouldCropToCircle;
@property(nonatomic) BOOL isTemplate; // @synthesize isTemplate=_isTemplate;
@property(copy) NSData *imageData; // @synthesize imageData=_imageData;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)hasSource;
- (BOOL)hasSize;
- (BOOL)hasScale;
- (BOOL)hasCornerRadius;
- (BOOL)hasShouldCropToCircle;
- (BOOL)hasIsTemplate;
- (id)initWithProtobuf:(id)arg1;
- (void)loadImageDataWithCompletionAndErrorHandler:(CDUnknownBlockType)arg1;
- (void)loadImageDataWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

