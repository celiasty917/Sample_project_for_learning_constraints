//
//  AppDelegate.h
//  Sample_project_for_learning_constraints
//
//  Created by Song, Tianyi | RASIA on 3/4/20.
//  Copyright © 2020 Song, Tianyi | RASIA. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

