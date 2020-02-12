//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class BRCAccountSession, BRCAppLibrary, BRCBookmark, BRCGenerationID, BRFileObjectID, NSData, NSSet, NSString, NSURL;

@interface BRCRelativePath : NSObject <NSSecureCoding>
{
    NSSet *_roots;
    NSString *_absolutePath;
    NSString *_relativePath;
    BRCRelativePath *_basePath;
    BRCBookmark *_bookmark;
    NSString *_symlinkContent;
    BRCGenerationID *_generationID;
    int _deviceID;
    BRCAppLibrary *_appLibrary;
    unsigned char _finderInfo[32];
    unsigned long long _fileID;
    unsigned short _mode;
    unsigned int _nlink;
    struct timespec _birthtime;
    struct timespec _mtime;
    struct timespec _atime;
    long long _size;
    unsigned long long _parentFileID;
    unsigned int _documentID;
    unsigned int _fsGenerationID;
    unsigned int _flags;
    unsigned short _type;
    unsigned char _itemScope;
    unsigned int _isExcluded:1;
    unsigned int _isInPackage:1;
    unsigned int _isBundle:1;
    unsigned int _isPackageRoot:1;
    unsigned int _readFault:1;
    unsigned int _hasFinderTags:1;
    unsigned int _isBusy:1;
    unsigned int _hasFinderInfoAliasBit:1;
    unsigned int _isBRAlias:1;
    unsigned int _qtnResolved:1;
    unsigned int _xattrsResolved:1;
    unsigned int _sharedBookmarkResolved:1;
    int _fd;
    // Error parsing type: Ai, name: _openRefCount
    struct brc_mutex _mutex;
    BRCAccountSession *_session;
    NSData *_quarantineInfo;
    NSData *_xattrs;
    NSString *_sharedItemBookmark;
}

+ (BOOL)supportsSecureCoding;
+ (int)locateByFileID:(unsigned long long)arg1 session:(id)arg2;
@property(nonatomic) unsigned char itemScope; // @synthesize itemScope=_itemScope;
@property(nonatomic) unsigned short type; // @synthesize type=_type;
@property(retain, nonatomic) BRCAppLibrary *appLibrary; // @synthesize appLibrary=_appLibrary;
@property(readonly, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
@property(readonly) unsigned long long parentHash;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *sharedItemBookmark; // @synthesize sharedItemBookmark=_sharedItemBookmark;
@property(readonly, nonatomic) NSData *xattrs; // @synthesize xattrs=_xattrs;
@property(readonly, nonatomic) NSData *quarantineInfo; // @synthesize quarantineInfo=_quarantineInfo;
@property(readonly, nonatomic) BRCBookmark *bookmark;
@property(readonly, nonatomic) NSString *faultDisplayName;
- (BOOL)isEqualToRelativePath:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)performOnOpenParentFileDescriptor:(CDUnknownBlockType)arg1 error:(int *)arg2;
- (BOOL)performOnOpenFileDescriptor:(CDUnknownBlockType)arg1 error:(int *)arg2;
- (BOOL)flock:(int)arg1;
- (BOOL)resolveMustExist:(BOOL)arg1 error:(int *)arg2;
- (void)close;
- (void)_close;
- (BOOL)_shouldKeepBasePathOpenWithoutOpenedFD;
- (BOOL)_shouldKeepBasePathOpen;
- (void)refreshPathTypeAndContainer;
- (id)refreshFromPathMustExist:(BOOL)arg1;
- (BOOL)resolveAndKeepOpenMustExist:(BOOL)arg1 allowResolveInPkg:(BOOL)arg2 error:(int *)arg3;
- (BOOL)resolveAndKeepOpenMustExist:(BOOL)arg1 error:(int *)arg2;
- (BOOL)_resolveAndKeepOpenMustExist:(BOOL)arg1 allowResolveInPkg:(BOOL)arg2 error:(int *)arg3;
- (int)_resolveSymlinkRelativeTo:(int)arg1 path:(id)arg2;
- (int)_resolveWhenDoesntExist;
- (int)_resolveWhenExists;
- (BOOL)_fixupRelativePath;
- (BOOL)_resolveRootWhenExists:(BOOL)arg1;
- (int)_resolvePathTypeAndContainer;
- (int)_resolveBasePath:(BOOL)arg1;
@property(readonly, nonatomic) BOOL hasFinderTags;
@property(readonly, nonatomic) unsigned int fileType;
@property(readonly, nonatomic) BOOL isBRAlias;
@property(readonly, nonatomic) BOOL isFinderAlias;
- (BOOL)isFileWithFinderInfoAliasBit;
@property(readonly, nonatomic) BOOL isBusy;
@property(readonly, nonatomic) BOOL isHiddenFile;
@property(readonly, nonatomic) BOOL isHiddenExtension;
@property(readonly, nonatomic) BOOL isExecutable;
@property(readonly, nonatomic) BOOL isWritable;
@property(readonly, nonatomic) BRCGenerationID *generationID;
@property(readonly, nonatomic) unsigned int fsGenerationID;
@property(readonly, nonatomic) long long accessTime;
@property(readonly, nonatomic) long long modificationTime;
@property(readonly, nonatomic) long long birthTime;
@property(readonly, nonatomic) long long size;
@property(readonly, nonatomic) int deviceID;
@property(readonly, nonatomic) unsigned int documentID;
@property(readonly, nonatomic) BRFileObjectID *parentFileObjectID;
@property(readonly, nonatomic) unsigned long long parentFileID;
@property(readonly, nonatomic) BRFileObjectID *fileObjectID;
@property(readonly, nonatomic) unsigned long long fileID;
@property(readonly, nonatomic) unsigned int hardlinkCount;
@property(readonly, nonatomic) NSString *symlinkContent;
@property(readonly, nonatomic) NSString *logicalName;
@property(readonly, nonatomic) NSString *filename;
@property(readonly, nonatomic) NSString *pathRelativeToPackageRoot;
@property(readonly, nonatomic) NSString *pathRelativeToRoot;
- (id)relativePath;
@property(readonly, nonatomic) NSString *absolutePath;
@property(readonly, nonatomic) BOOL exists;
@property(readonly, nonatomic) BOOL isSymLink;
@property(readonly, nonatomic) BOOL isExcluded;
- (BOOL)isResolved;
@property(readonly, nonatomic) BOOL isRoot;
@property(readonly, nonatomic) BOOL isInPackage;
@property(readonly, nonatomic) BOOL isPackageRoot;
@property(readonly, nonatomic) BOOL isFile;
@property(readonly, nonatomic) BOOL isUnixDir;
@property(readonly, nonatomic) BOOL isBundle;
@property(readonly, nonatomic) BOOL isFault;
@property(readonly, nonatomic) BOOL isDocument;
- (id)logicalURL;
- (id)logicalURLWithLogicalName:(id)arg1;
@property(readonly, nonatomic) NSURL *physicalURL;
@property(readonly, nonatomic) BRCRelativePath *root;
- (id)basePath;
- (void)dealloc;
- (id)pathOfPackageRoot;
- (id)pathWithChildAtPath:(id)arg1;
- (id)initWithFileID:(unsigned long long)arg1 root:(id)arg2 session:(id)arg3;
- (id)initWithFileID:(unsigned long long)arg1 session:(id)arg2;
- (id)initWithPath:(id)arg1 appLibrary:(id)arg2;
- (id)initWithAbsolutePath:(id)arg1 session:(id)arg2;
- (id)_initWithPath:(id)arg1 relativeToRoot:(id)arg2;
- (id)initWithRootPath:(id)arg1 session:(id)arg2;
- (id)init;

@end

