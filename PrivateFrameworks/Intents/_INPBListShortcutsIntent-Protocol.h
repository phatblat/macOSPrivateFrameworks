//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, _INPBAppIdentifier, _INPBIntentMetadata;

@protocol _INPBListShortcutsIntent <NSObject>
+ (Class)appTitleType;
@property(nonatomic) BOOL hasOriginDevice;
@property(nonatomic) int originDevice;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) unsigned long long appTitlesCount;
@property(copy, nonatomic) NSArray *appTitles;
- (int)StringAsOriginDevice:(NSString *)arg1;
- (NSString *)originDeviceAsString:(int)arg1;
- (_INPBAppIdentifier *)appTitleAtIndex:(unsigned long long)arg1;
- (void)addAppTitle:(_INPBAppIdentifier *)arg1;
- (void)clearAppTitles;
@end

