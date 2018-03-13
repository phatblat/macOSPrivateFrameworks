//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DifferentialPrivacy/_DPDataRecorder.h>

@class NSSet, _DPStorage;

@interface _DPDatabaseRecorder : _DPDataRecorder
{
    _DPStorage *_db;
    NSSet *_blacklistSet;
    unsigned long long _puzzlePieceCount;
}

@property(readonly, nonatomic) unsigned long long puzzlePieceCount; // @synthesize puzzlePieceCount=_puzzlePieceCount;
@property(readonly, nonatomic) NSSet *blacklistSet; // @synthesize blacklistSet=_blacklistSet;
@property(readonly, nonatomic) _DPStorage *db; // @synthesize db=_db;
- (void).cxx_destruct;
- (id)description;
- (void)recordWords:(id)arg1;
- (void)recordStrings:(id)arg1;
- (void)recordNumbers:(id)arg1;
- (id)initWithKey:(id)arg1 storage:(id)arg2 systemBlacklistPath:(id)arg3 runtimeBlacklistPath:(id)arg4;
- (id)initWithKey:(id)arg1 storage:(id)arg2;
- (id)init;

@end

