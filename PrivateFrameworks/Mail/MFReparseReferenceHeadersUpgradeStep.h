//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFLibraryUpgradeStep.h>

@class NSArray;

@interface MFReparseReferenceHeadersUpgradeStep : MFLibraryUpgradeStep
{
    NSArray *_accounts;
}

+ (BOOL)needToPerformFromMinorVersion:(unsigned long long)arg1 initialLastWriteMinorVersion:(unsigned long long)arg2;
+ (unsigned long long)targetVersion;
@property(readonly, copy, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
- (void).cxx_destruct;
- (void)_reparseReferencesForRowIDsByMailboxURL:(id)arg1;
- (void)runWithRowIDsNeedingConversationRecalculation:(id)arg1;
- (id)initWithDatabaseConnection:(id)arg1 accounts:(id)arg2;

@end

