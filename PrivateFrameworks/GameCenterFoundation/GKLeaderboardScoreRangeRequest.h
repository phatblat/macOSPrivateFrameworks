//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterFoundation/GKLeaderboardScoreRequest.h>

@interface GKLeaderboardScoreRangeRequest : GKLeaderboardScoreRequest
{
    struct _NSRange _range;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

