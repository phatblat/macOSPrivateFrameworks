//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BMManagedObjectConverter : NSObject
{
}

- (id)insertItems:(struct NSSet *)arg1 inManagedObjectContext:(id)arg2;
- (id)insertRules:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)convertItemMOs:(id)arg1 error:(id *)arg2;
- (id)convertRuleMOs:(id)arg1 error:(id *)arg2;

@end
