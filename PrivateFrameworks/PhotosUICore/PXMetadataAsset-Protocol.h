//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSDate;

@protocol PXMetadataAsset <NSObject>
@property(readonly, nonatomic) CLLocation *location;
@property(readonly, nonatomic) NSDate *creationDate;

@optional
@property(readonly, nonatomic) BOOL cloudIsDeletable;
@end

