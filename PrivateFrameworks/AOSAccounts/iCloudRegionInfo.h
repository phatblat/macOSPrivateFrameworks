//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface iCloudRegionInfo : NSObject <NSCopying>
{
    NSDictionary *_regionInfoDictionary;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *displayedHostname;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

