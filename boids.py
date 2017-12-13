'''
flocking boids simulation
'''

class Boids()
    def __init__(self, boid):
        self.boid = boid

    def rule1(self, boid): #steer towards center of flock


    def rule2(self, boid): #don't crash


    def rule3(self, boid): #match velocity with neerby boids




class View()
    def __init__(self, model, surface):
        self.model = model
        self.surface = surface




if __name__ ==  "__main__":
    pygame.init()
    screen = pygame.display.set_mode((800, 600)) #window size, as a tuple
    pygame.display.set_caption('Flocking Boids')
    initialise_positions()


    my_screen = View(model, screen)
    while running:
        for event in pygame.event.get():
            if event.type == pygame.K_SPACE:
                my_controller.input_event(event)
                running = True
            else:
                running = False

        screen.fill((0,0,0)) #screen will start out black
        my_screen.draw()
        pygame.display.update()

        draw_boids()
		move_all_boids_to_new_positions()

    pygame.quit()
