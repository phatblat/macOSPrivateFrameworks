//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiDatabaseRequest.h>

@class NSArray, NSMutableArray;

@interface LiTransactionContextSaveRequest : LiDatabaseRequest
{
    NSMutableArray *_mutableModelData;
    unsigned char _policy;
    unsigned short _changeReason;
    long long _contextId;
    NSArray *_modelData;
}

+ (unsigned char)encodingObjectType;
@property(readonly, nonatomic) NSArray *modelData; // @synthesize modelData=_modelData;
@property(readonly, nonatomic) unsigned char policy; // @synthesize policy=_policy;
@property(readonly, nonatomic) unsigned short changeReason; // @synthesize changeReason=_changeReason;
@property(readonly, nonatomic) long long contextId; // @synthesize contextId=_contextId;
- (void).cxx_destruct;
- (void)encodeWithTransportEncoder:(id)arg1 forLibrary:(id)arg2;
- (id)initWithTransportDecoder:(id)arg1 forLibrary:(id)arg2;
- (void)enqueueDatabaseWriteForLibrary:(id)arg1 clientIdentifier:(unsigned char)arg2;
- (void)addModelData:(id)arg1;
@property(readonly, nonatomic) BOOL isEmpty;
- (id)description;
- (id)debugDescription;
- (id)initWithContextId:(long long)arg1 changeReason:(unsigned short)arg2 policy:(unsigned char)arg3;

@end

