//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FPItem, NSDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL, QLThumbnailGenerationRequest, QLThumbnailMetadata;

@interface QLThumbnail : NSObject
{
    QLThumbnailMetadata *_properties;
    id <QLThumbnailGeneratorInfo> _generatorInfo;
    struct __QLThumbnail *_thumbnailRef;
    BOOL _imageComputed;
    BOOL _isLowQuality;
    BOOL _cancelled;
    BOOL _startedOnServer;
    int _lastError;
    int _flavor;
    QLThumbnailGenerationRequest *_generationRequest;
    NSURL *_url;
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSDictionary *_options;
    long long _triesCount;
    NSString *_contentTypeUTI;
    FPItem *_fpitem;
    struct CGSize _maxSize;
    struct CGRect _contentRect;
}

+ (id)dummyForcedGeneratorInfo;
+ (id)getGeneratorInfo:(id)arg1 isDatabaseUpdating:(char *)arg2;
@property BOOL startedOnServer; // @synthesize startedOnServer=_startedOnServer;
@property struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property(retain) FPItem *fpitem; // @synthesize fpitem=_fpitem;
@property(copy) NSString *contentTypeUTI; // @synthesize contentTypeUTI=_contentTypeUTI;
@property BOOL cancelled; // @synthesize cancelled=_cancelled;
@property struct CGRect contentRect; // @synthesize contentRect=_contentRect;
@property BOOL isLowQuality; // @synthesize isLowQuality=_isLowQuality;
@property BOOL imageComputed; // @synthesize imageComputed=_imageComputed;
@property long long triesCount; // @synthesize triesCount=_triesCount;
@property(retain) NSDictionary *options; // @synthesize options=_options;
@property int flavor; // @synthesize flavor=_flavor;
@property(retain) NSObject<OS_dispatch_queue> *lockQueue; // @synthesize lockQueue=_lockQueue;
@property int lastError; // @synthesize lastError=_lastError;
@property(retain) NSURL *url; // @synthesize url=_url;
@property(retain) QLThumbnailGenerationRequest *generationRequest; // @synthesize generationRequest=_generationRequest;
@property(retain) id <QLThumbnailGeneratorInfo> generatorInfo; // @synthesize generatorInfo=_generatorInfo;
@property(retain) QLThumbnailMetadata *properties; // @synthesize properties=_properties;
- (void).cxx_destruct;
- (id)description;
- (void)startedOnServerWithContentType:(id)arg1;
- (void)failedFromServer:(int)arg1;
- (BOOL)sendQuerySynchronous:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_shouldGenerateLocallyForDebug;
- (void)sendQueryFromThumbnailQueue:(CDUnknownBlockType)arg1;
- (void)_syncGetImageIfNecessary;
- (void)syncGetImageIfNecessary;
@property(readonly) struct __QLThumbnail *thumbnailRef;
- (void)dealloc;
- (void)teardown;
- (id)initWithThumbnailRef:(struct __QLThumbnail *)arg1 url:(id)arg2 fpItem:(id)arg3 maxSize:(struct CGSize)arg4 options:(id)arg5;

@end
