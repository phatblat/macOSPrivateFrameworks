//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FileProvider/FPActionOperationInfo.h>

#import "NSSecureCoding.h"

@class FPActionOperationLocator, NSArray;

@interface FPMoveInfo : FPActionOperationInfo <NSSecureCoding>
{
    BOOL _shouldBounce;
    BOOL _byCopy;
    FPActionOperationLocator *_targetFolder;
    NSArray *_rootFilenames;
    unsigned long long _lastUsedDatePolicy;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL byCopy; // @synthesize byCopy=_byCopy;
@property(nonatomic) BOOL shouldBounce; // @synthesize shouldBounce=_shouldBounce;
@property(nonatomic) unsigned long long lastUsedDatePolicy; // @synthesize lastUsedDatePolicy=_lastUsedDatePolicy;
@property(retain, nonatomic) NSArray *rootFilenames; // @synthesize rootFilenames=_rootFilenames;
@property(retain, nonatomic) FPActionOperationLocator *targetFolder; // @synthesize targetFolder=_targetFolder;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL byMoving;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithOperationID:(id)arg1 roots:(id)arg2 rootFilenames:(id)arg3 targetFolder:(id)arg4 lastUsedDatePolicy:(unsigned long long)arg5 bounce:(BOOL)arg6 byCopy:(BOOL)arg7;

@end
