//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UINSMenuItem.h"

@class NSDictionary, NSString, RVItem;

__attribute__((visibility("hidden")))
@interface UINSMenuItem : NSObject <UINSMenuItem>
{
    BOOL _alternate;
    BOOL _enabled;
    BOOL _separatorItem;
    BOOL _replacedBySubmenuItems;
    id _target;
    NSString *_actionName;
    NSString *_keyEquivalent;
    unsigned long long _keyEquivalentModifiers;
    long long _state;
    long long _type;
    NSDictionary *_properties;
    NSDictionary *_validatedProperties;
    id <UINSMenu> _submenu;
    NSString *_title;
    RVItem *_rvItem;
    id <UIRVPresenterHighlightDelegate> _rvHighlighter;
}

+ (id)separatorItem;
@property(retain, nonatomic) id <UIRVPresenterHighlightDelegate> rvHighlighter; // @synthesize rvHighlighter=_rvHighlighter;
@property(retain, nonatomic) RVItem *rvItem; // @synthesize rvItem=_rvItem;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) id <UINSMenu> submenu; // @synthesize submenu=_submenu;
@property(readonly, nonatomic) NSDictionary *validatedProperties; // @synthesize validatedProperties=_validatedProperties;
@property(readonly, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic, getter=isReplacedBySubmenuItems) BOOL replacedBySubmenuItems; // @synthesize replacedBySubmenuItems=_replacedBySubmenuItems;
@property(nonatomic, getter=isSeparatorItem) BOOL separatorItem; // @synthesize separatorItem=_separatorItem;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isAlternate) BOOL alternate; // @synthesize alternate=_alternate;
@property(nonatomic) unsigned long long keyEquivalentModifiers; // @synthesize keyEquivalentModifiers=_keyEquivalentModifiers;
@property(copy, nonatomic) NSString *keyEquivalent; // @synthesize keyEquivalent=_keyEquivalent;
@property(copy, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;

@end

