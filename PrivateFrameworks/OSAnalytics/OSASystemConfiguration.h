//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OSAnalytics/OSAProxyConfiguration.h>

@class NSDictionary, NSSet, NSString;

@interface OSASystemConfiguration : OSAProxyConfiguration
{
    BOOL _appleInternal;
    BOOL _multiUserMode;
    NSString *_pairedWatchOS;
    NSDictionary *_logConfig;
    NSSet *_logBlacklist;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)isFile:(id)arg1 validForLETransfer:(id)arg2 reasonableSize:(long long)arg3 internalTypes:(id)arg4;
- (BOOL)isFile:(id)arg1 validForSubmission:(id)arg2 reasonableSize:(long long)arg3 to:(id)arg4 internalTypes:(id)arg5;
- (void)onceConfig;
- (void)saveToPath:(id)arg1;
- (id)internalKey;
- (id)currentTaskingIDByRouting;
- (id)seedGroup;
- (id)releaseType;
- (id)automatedContextURL;
- (id)automatedDeviceGroup;
- (id)experimentGroup;
- (id)awdReporterKey;
- (id)crashReporterKey;
- (id)serialNumber;
- (id)systemId;
- (id)uiCountryCode;
- (id)targetAudience;
- (id)osTrain;
- (id)productReleaseString;
- (id)productNameVersionBuildString;
- (id)productBuildString;
- (id)buildVersion;
- (id)productVersion;
- (void)sysVersionData;
- (id)modelCode;
- (id)pairedWatchOS;
@property(readonly) BOOL multiUserMode;
@property(readonly) BOOL appleInternal;
- (id)identifier;
- (id)assembleMetadataAt:(double)arg1 withOptions:(unsigned int)arg2;
- (BOOL)isProxy;

@end

