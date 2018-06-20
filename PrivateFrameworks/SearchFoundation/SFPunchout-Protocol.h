//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSString, SFUserActivityData;

@protocol SFPunchout <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(nonatomic) BOOL isRunnableInBackground;
@property(copy, nonatomic) NSString *actionTarget;
@property(retain, nonatomic) SFUserActivityData *userActivityData;
@property(copy, nonatomic) NSArray *urls;
@property(copy, nonatomic) NSString *label;
@property(copy, nonatomic) NSString *bundleIdentifier;
@property(copy, nonatomic) NSString *name;
@end

