//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ICMarkupUtilities : NSObject
{
}

+ (id)markupModelDataFromData:(id)arg1;
+ (id)markupModelDataFromDataAtURL:(id)arg1;
+ (void)applyMarkupModelData:(id)arg1 attachment:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (void)extractReturnedMarkupURL:(id)arg1 attachment:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (void)embedReturnedMarkupURL:(id)arg1 attachment:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (void)applyReturnedMarkupURL:(id)arg1 attachment:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)imageDataWithMarkupModelData:(id)arg1 sourceImageURL:(id)arg2;
+ (id)imageDataWithMarkupModelData:(id)arg1 sourceImageData:(id)arg2 embedData:(BOOL)arg3;
+ (id)imageDataWithMarkupModelData:(id)arg1 sourceImageData:(id)arg2;
+ (id)createProcessingMarkupViewControllerOutWindow:(struct NSWindow **)arg1;
+ (id)createMarkupViewController;
+ (id)cleanImageMetadataFromData:(id)arg1;
+ (BOOL)hasPrivateImageMetadata:(id)arg1;

@end
