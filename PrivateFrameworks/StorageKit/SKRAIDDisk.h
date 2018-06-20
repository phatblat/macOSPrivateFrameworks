//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StorageKit/SKDisk.h>

@class NSArray, NSString;

@interface SKRAIDDisk : SKDisk
{
    BOOL _isRAIDSet;
    NSString *_raidUUID;
    SKDisk *_contentDisk;
    NSArray *_setMemberUUIDs;
    NSArray *_setSpareUUIDs;
    NSString *_status;
}

@property(retain) NSString *status; // @synthesize status=_status;
@property(retain) NSArray *setSpareUUIDs; // @synthesize setSpareUUIDs=_setSpareUUIDs;
@property(retain) NSArray *setMemberUUIDs; // @synthesize setMemberUUIDs=_setMemberUUIDs;
@property(retain) SKDisk *contentDisk; // @synthesize contentDisk=_contentDisk;
@property BOOL isRAIDSet; // @synthesize isRAIDSet=_isRAIDSet;
@property(retain) NSString *raidUUID; // @synthesize raidUUID=_raidUUID;
- (void).cxx_destruct;
- (void)deleteRAIDWithProgress:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)removeDiskFromRAID:(id)arg1 progress:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)repairRAIDWithDisk:(id)arg1 progress:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)addDisksToRAID:(id)arg1 withType:(id)arg2 progress:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)contentDiskIdentifier;
- (BOOL)canResize;
- (id)description;
- (id)supportedFilesystems;
- (BOOL)matchesDictionary:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)dictionaryRepresentation;
- (id)minimalDictionaryRepresentation;
- (void)updateWithDictionary:(id)arg1;

@end
