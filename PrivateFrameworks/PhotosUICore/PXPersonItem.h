//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSImage, PHPerson;

@interface PXPersonItem : NSObject
{
    int _faceImageRequestID;
    PHPerson *_modelObject;
    CDUnknownBlockType _faceImageLoadingCompletionBlock;
    CDUnknownBlockType _fastDisplayBlock;
    NSImage *_faceImage;
}

@property __weak NSImage *faceImage; // @synthesize faceImage=_faceImage;
@property(copy) CDUnknownBlockType fastDisplayBlock; // @synthesize fastDisplayBlock=_fastDisplayBlock;
@property(copy) CDUnknownBlockType faceImageLoadingCompletionBlock; // @synthesize faceImageLoadingCompletionBlock=_faceImageLoadingCompletionBlock;
@property int faceImageRequestID; // @synthesize faceImageRequestID=_faceImageRequestID;
@property(retain, nonatomic) PHPerson *modelObject; // @synthesize modelObject=_modelObject;
- (void).cxx_destruct;
- (void)updateWithModel:(id)arg1;
- (id)initWithPerson:(id)arg1;

@end

