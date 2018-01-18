//
//  AppDelegate.h
//  RecoverNotes4iOS
//
//  Created by Brandon Withall on 2018-01-18.
//  Copyright © 2018 Brandon Withall. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

