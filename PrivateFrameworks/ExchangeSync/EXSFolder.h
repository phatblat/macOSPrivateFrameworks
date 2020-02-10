//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface EXSFolder : NSObject
{
    long long _folderID;
    long long _accountID;
    NSString *_displayName;
    long long _folderType;
    NSString *_externalID;
    NSString *_externalChangeKey;
    NSString *_externalSyncState;
    NSString *_externalParentFolderID;
    NSString *_internalID;
    NSString *_internalChangeKey;
    NSString *_internalParentFolderID;
}

@property(copy, nonatomic) NSString *internalParentFolderID; // @synthesize internalParentFolderID=_internalParentFolderID;
@property(copy, nonatomic) NSString *internalChangeKey; // @synthesize internalChangeKey=_internalChangeKey;
@property(copy, nonatomic) NSString *internalID; // @synthesize internalID=_internalID;
@property(copy, nonatomic) NSString *externalParentFolderID; // @synthesize externalParentFolderID=_externalParentFolderID;
@property(copy, nonatomic) NSString *externalSyncState; // @synthesize externalSyncState=_externalSyncState;
@property(copy, nonatomic) NSString *externalChangeKey; // @synthesize externalChangeKey=_externalChangeKey;
@property(copy, nonatomic) NSString *externalID; // @synthesize externalID=_externalID;
@property(nonatomic) long long folderType; // @synthesize folderType=_folderType;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) long long accountID; // @synthesize accountID=_accountID;
@property(nonatomic) long long folderID; // @synthesize folderID=_folderID;
- (void).cxx_destruct;
- (id)description;
- (void)updateWithChangeItem:(id)arg1;
- (id)initWithChangeItem:(id)arg1;

@end
