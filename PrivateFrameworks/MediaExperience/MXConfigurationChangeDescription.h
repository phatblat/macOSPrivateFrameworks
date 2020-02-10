//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MXConfigurationChangeRecord, NSArray, NSMutableArray;

@interface MXConfigurationChangeDescription : NSObject
{
    unsigned char mConfigurationChangeCause;
    MXConfigurationChangeRecord *mHardwareConfigurationChangeRecord;
    NSMutableArray *mSessionConfigurationChangeRecords;
}

@property(readonly) NSArray *sessionConfigurationChangeRecords; // @synthesize sessionConfigurationChangeRecords=mSessionConfigurationChangeRecords;
@property(readonly) MXConfigurationChangeRecord *hardwareConfigurationChangeRecord; // @synthesize hardwareConfigurationChangeRecord=mHardwareConfigurationChangeRecord;
@property(readonly) unsigned char configurationChangeCause; // @synthesize configurationChangeCause=mConfigurationChangeCause;
- (void)populateConfigurationChangeDescription:(unsigned char)arg1 inSessionConfigurationChangeRecords:(id *)arg2 inHwConfigurationChangeRecord:(id *)arg3;
- (id)init;

@end
