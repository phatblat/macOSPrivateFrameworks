//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SignpostSupportMessageArgument : NSObject
{
    unsigned char _type;
    NSObject *_argumentObject;
}

@property(readonly, nonatomic) NSObject *argumentObject; // @synthesize argumentObject=_argumentObject;
@property(readonly, nonatomic) unsigned char type; // @synthesize type=_type;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)initWithArgumentObject:(id)arg1;

@end

