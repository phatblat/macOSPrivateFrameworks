//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ObjectAnalytics.h"

__attribute__((visibility("hidden")))
@interface DiagnosticCaseStorageAnalytics : ObjectAnalytics
{
}

- (long long)removeAllDiagnosticCaseStorages;
- (id)allDiagnosticCasesStorageDictionariesWithProperties:(id)arg1;
- (id)allDiagnosticCasesStorage;
- (id)historicalDiagnosticCaseStorageDictionaryFromIdentifier:(id)arg1 withEvents:(BOOL)arg2 count:(unsigned long long)arg3;
- (id)historicalDiagnosticCaseStorageFromIdentifier:(id)arg1 count:(unsigned long long)arg2;
- (id)diagnosticCaseDictionaryKeys;
- (id)diagnosticCaseStorageDictionaryForIdentifier:(id)arg1 properties:(id)arg2;
- (id)diagnosticCaseStorageWithIdentifier:(id)arg1;
- (id)diagnosticCaseStorageWithId:(id)arg1;
- (id)initWithWorkspace:(id)arg1 withCache:(BOOL)arg2;
- (id)init;

@end
