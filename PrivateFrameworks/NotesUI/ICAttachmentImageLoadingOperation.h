//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSCache, NSManagedObjectID, NSMutableArray, NSString, NSURL;

@interface ICAttachmentImageLoadingOperation : NSOperation
{
    BOOL _forceFullSizeImage;
    short _attachmentType;
    NSString *_cacheKey;
    NSCache *_cache;
    NSManagedObjectID *_attachmentObjectID;
    NSURL *_mediaURL;
    NSMutableArray *_completionHandlers;
}

@property(retain, nonatomic) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(nonatomic) BOOL forceFullSizeImage; // @synthesize forceFullSizeImage=_forceFullSizeImage;
@property(nonatomic) short attachmentType; // @synthesize attachmentType=_attachmentType;
@property(retain, nonatomic) NSURL *mediaURL; // @synthesize mediaURL=_mediaURL;
@property(retain, nonatomic) NSManagedObjectID *attachmentObjectID; // @synthesize attachmentObjectID=_attachmentObjectID;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
@property(copy, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
- (void).cxx_destruct;
- (void)main;
- (void)removeCompletionHandler:(CDUnknownBlockType)arg1 cancelIfNoneLeft:(BOOL)arg2;
- (CDUnknownBlockType)addCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithCache:(id)arg1 attachment:(id)arg2 attachmentType:(short)arg3 forceFullSizeImage:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end

