//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ImportedBrowserCredential;

@protocol BrowserCredentialImporterDelegate <NSObject>
- (void)importerDidFailToImportCredentials;
- (void)importerDidFinishImportingCredentials;
- (void)importerDidImportCredential:(ImportedBrowserCredential *)arg1;
- (void)importerRequiresMasterPassword;
@end
