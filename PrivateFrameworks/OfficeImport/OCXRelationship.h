//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface OCXRelationship : NSObject
{
    NSString *mIdString;
    NSString *mType;
    NSString *mTarget;
    BOOL mExternal;
}

@property(readonly, nonatomic) NSString *target; // @synthesize target=mTarget;
@property(readonly, nonatomic) NSString *type; // @synthesize type=mType;
@property(readonly, nonatomic) NSString *idString; // @synthesize idString=mIdString;
- (void).cxx_destruct;
- (void)writeToStreamWriter:(id)arg1;
- (id)initWithId:(unsigned long long)arg1 type:(id)arg2 target:(id)arg3 external:(BOOL)arg4;

@end

