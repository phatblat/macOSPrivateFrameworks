//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface DAFolderChange : NSObject <NSSecureCoding>
{
    BOOL _renameOnCollision;
    unsigned int _taskId;
    unsigned long long _changeType;
    NSString *_folderId;
    NSString *_parentFolderId;
    NSString *_displayName;
    long long _dataclass;
    id <DAFolderChangeConsumer> _consumer;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) __weak id <DAFolderChangeConsumer> consumer; // @synthesize consumer=_consumer;
@property(nonatomic) BOOL renameOnCollision; // @synthesize renameOnCollision=_renameOnCollision;
@property(nonatomic) unsigned int taskId; // @synthesize taskId=_taskId;
@property(nonatomic) long long dataclass; // @synthesize dataclass=_dataclass;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *parentFolderId; // @synthesize parentFolderId=_parentFolderId;
@property(retain, nonatomic) NSString *folderId; // @synthesize folderId=_folderId;
@property(nonatomic) unsigned long long changeType; // @synthesize changeType=_changeType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initFolderChangeWithChangeType:(unsigned long long)arg1 folderId:(id)arg2 parentFolderId:(id)arg3 displayName:(id)arg4 dataclass:(long long)arg5 consumer:(id)arg6;

@end

