//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SVXModule : NSObject
{
    BOOL _isActive;
    NSString *_identifier;
    Class _instanceClass;
    id <SVXPerforming> _performer;
}

@property(nonatomic) BOOL isActive; // @synthesize isActive=_isActive;
@property(readonly, nonatomic) id <SVXPerforming> performer; // @synthesize performer=_performer;
@property(readonly, nonatomic) Class instanceClass; // @synthesize instanceClass=_instanceClass;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:(id)arg1 instanceClass:(Class)arg2 performer:(id)arg3;

@end
