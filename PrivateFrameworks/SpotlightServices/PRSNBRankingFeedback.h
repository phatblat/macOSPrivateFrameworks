//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpotlightServices/PRSFeedback.h>

@class NSData;

@interface PRSNBRankingFeedback : PRSFeedback
{
    NSData *_data;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)plist;
- (id)typeString;
- (id)type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;

@end

