//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDate, NSString;

@interface CPLChangeSessionUpdate : NSObject <NSSecureCoding>
{
    NSString *_libraryVersion;
    NSDate *_queuedDate;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSDate *queuedDate; // @synthesize queuedDate=_queuedDate;
@property(readonly, copy, nonatomic) NSString *libraryVersion; // @synthesize libraryVersion=_libraryVersion;
- (void).cxx_destruct;
- (id)pendingRecordChangeForClientCacheWithLocalScopedIdentifier:(id)arg1;
@property(readonly, nonatomic) NSString *statusDescription;
- (id)storageForStatusInStore:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)discardFromStore:(id)arg1 error:(id *)arg2;
- (BOOL)applyToStore:(id)arg1 error:(id *)arg2;
- (id)initWithStore:(id)arg1;

@end

