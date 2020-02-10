//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PVTaskTokenPool;

@interface PVTaskToken : NSObject
{
    BOOL _returned;
    PVTaskTokenPool *_pool;
    unsigned long long _tokenId;
}

@property(nonatomic) BOOL returned; // @synthesize returned=_returned;
@property(readonly, nonatomic) unsigned long long tokenId; // @synthesize tokenId=_tokenId;
@property(readonly, nonatomic) __weak PVTaskTokenPool *pool; // @synthesize pool=_pool;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPool:(id)arg1 tokenId:(unsigned long long)arg2;
- (void)returnToPool;

@end
