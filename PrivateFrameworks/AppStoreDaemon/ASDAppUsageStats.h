//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSNumber, NSString;

@interface ASDAppUsageStats : NSObject <NSCopying>
{
    NSString *_bundleID;
    NSString *_bundleVersion;
    long long _eventTime;
    NSNumber *_evid;
    NSNumber *_itemID;
    NSString *_itemName;
    long long _usageTime;
    long long _usageCount;
}

@property(nonatomic) long long usageCount; // @synthesize usageCount=_usageCount;
@property(nonatomic) long long usageTime; // @synthesize usageTime=_usageTime;
@property(copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(copy, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(copy, nonatomic) NSNumber *evid; // @synthesize evid=_evid;
@property(nonatomic) long long eventTime; // @synthesize eventTime=_eventTime;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
