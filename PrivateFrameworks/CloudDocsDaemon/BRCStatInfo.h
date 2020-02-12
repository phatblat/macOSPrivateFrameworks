//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class BRCItemID, BRCUserRowID, BRFieldCKInfo, BRMangledID, NSData, NSString;

@interface BRCStatInfo : NSObject <NSCopying, NSSecureCoding>
{
    BRFieldCKInfo *_ckInfo;
    BRCItemID *_parentID;
    BOOL _state;
    BOOL _type;
    BOOL _mode;
    long long _birthtime;
    long long _lastUsedTime;
    long long _favoriteRank;
    NSString *_logicalName;
    NSString *_aliasTarget;
    BOOL _hiddenExt;
    NSData *_xattrSignature;
    NSData *_lazyXattr;
    NSData *_finderTags;
    NSString *_trashPutBackPath;
    BRCItemID *_trashPutBackParentID;
    BRCUserRowID *_creatorRowID;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) BRCUserRowID *creatorRowID; // @synthesize creatorRowID=_creatorRowID;
@property(retain, nonatomic) BRCItemID *trashPutBackParentID; // @synthesize trashPutBackParentID=_trashPutBackParentID;
@property(retain, nonatomic) NSString *trashPutBackPath; // @synthesize trashPutBackPath=_trashPutBackPath;
@property(readonly, nonatomic) NSString *aliasTarget; // @synthesize aliasTarget=_aliasTarget;
@property(retain, nonatomic) NSString *logicalName; // @synthesize logicalName=_logicalName;
@property(retain, nonatomic) NSData *finderTags; // @synthesize finderTags=_finderTags;
@property(retain, nonatomic) NSData *lazyXattr; // @synthesize lazyXattr=_lazyXattr;
@property(retain, nonatomic) NSData *xattrSignature; // @synthesize xattrSignature=_xattrSignature;
@property(nonatomic, getter=isHiddenExt) BOOL hiddenExt; // @synthesize hiddenExt=_hiddenExt;
@property(retain, nonatomic) BRCItemID *parentID; // @synthesize parentID=_parentID;
@property(nonatomic) long long favoriteRank; // @synthesize favoriteRank=_favoriteRank;
@property(nonatomic) long long lastUsedTime; // @synthesize lastUsedTime=_lastUsedTime;
@property(nonatomic) long long birthtime; // @synthesize birthtime=_birthtime;
@property(nonatomic) BOOL mode; // @synthesize mode=_mode;
@property(nonatomic) BOOL type; // @synthesize type=_type;
@property(nonatomic) BOOL state; // @synthesize state=_state;
@property(retain, nonatomic) BRFieldCKInfo *ckInfo; // @synthesize ckInfo=_ckInfo;
- (void).cxx_destruct;
- (BOOL)isEtagEqual:(id)arg1;
- (id)displayName;
- (BOOL)isWritable;
- (BOOL)isExecutable;
- (unsigned long long)diffAgainst:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)check:(id)arg1 logToFile:(struct __sFILE *)arg2;
- (BOOL)checkStateWithItemID:(id)arg1 logToFile:(struct __sFILE *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatInfo:(id)arg1;
- (id)initFromResultSet:(id)arg1 pos:(int)arg2;
- (id)description;
- (id)descriptionWithContext:(id)arg1 origName:(id)arg2;
@property(readonly, nonatomic) BOOL iWorkShareable;
@property(readonly, nonatomic) NSString *representableName;
- (void)_updateAliasTarget:(id)arg1;
- (id)_aliasTargetItemID;
@property(readonly, nonatomic) BRMangledID *_aliasTargetMangledID;

@end

