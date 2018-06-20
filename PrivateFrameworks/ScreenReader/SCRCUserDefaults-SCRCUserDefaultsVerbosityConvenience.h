//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCRCUserDefaults.h"

@interface SCRCUserDefaults (SCRCUserDefaultsVerbosityConvenience)
- (BOOL)shouldSpeakAllStaticTextElementsInSheets;
- (BOOL)isSystemBrailleVerbosityCustom;
- (BOOL)isSystemBrailleVerbosityHigh;
- (BOOL)isSystemBrailleVerbosityMedium;
- (BOOL)isSystemBrailleVerbosityLow;
- (id)systemBrailleVerbosityLevel;
- (BOOL)isSystemVerbosityCustom;
- (BOOL)isSystemVerbosityHigh;
- (BOOL)isSystemVerbosityMedium;
- (BOOL)isSystemVerbosityLow;
- (id)systemVerbosityLevel;
- (id)outputConfigurationKeysForCategory:(id)arg1;
@property(readonly, nonatomic) long long typingEcho;
@property(readonly, nonatomic) long long wordDelimiter;
@end
