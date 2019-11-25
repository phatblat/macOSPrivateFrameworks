//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMDSettingBaseProtocol.h"

@class HMSettingValue, NSNumber, NSString;

@protocol HMDSettingProtocol <HMDSettingBaseProtocol>
@property(readonly, copy) id value;
@property(readonly, copy) NSNumber *properties;
@property(readonly, copy) NSNumber *type;
@property(readonly, getter=isReadOnly) BOOL readOnly;
@property(readonly, copy) NSString *keyPath;
- (BOOL)wouldValueUpdate:(HMSettingValue *)arg1;
- (BOOL)isValidValue:(HMSettingValue *)arg1;
@end

