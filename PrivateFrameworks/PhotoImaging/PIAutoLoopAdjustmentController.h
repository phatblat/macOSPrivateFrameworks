//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoImaging/PIAdjustmentController.h>

@class NSDictionary, NSString;

@interface PIAutoLoopAdjustmentController : PIAdjustmentController
{
}

+ (id)recipeKey;
+ (id)flavorKey;
@property(copy, nonatomic) NSString *flavor;
@property(copy, nonatomic) NSDictionary *recipe;
@property(readonly, nonatomic) struct CGRect stabilizedCropRect;

@end

