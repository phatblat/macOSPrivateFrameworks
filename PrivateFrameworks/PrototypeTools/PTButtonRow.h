//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PrototypeTools/PTSRow.h>

@class NSString;

@interface PTButtonRow : PTSRow
{
    NSString *_outletKeyPath;
}

+ (id)rowWithTitle:(id)arg1 outletKeyPath:(id)arg2;
+ (id)rowWithTitle:(id)arg1 action:(id)arg2;
@property(copy, nonatomic) NSString *outletKeyPath; // @synthesize outletKeyPath=_outletKeyPath;
- (void).cxx_destruct;
- (id)_defaultAction;
- (id)outletKeyPath:(id)arg1;

@end

